function groupThePeople(groupSizes: number[]): number[][] {
    const res: number[][] = [];
    const groupsMap: number[][] = Array.from({length: 500}, () => []);

    for (let userId = 0; userId < groupSizes.length; userId++) {
        const groupSize = groupSizes[userId];

        const group = groupsMap[groupSize];
        group.push(userId);

        if (group.length === groupSize) {
            res.push(group);
            groupsMap[groupSize] = [];
        } else {
            groupsMap[groupSize] = group;
        }
    }

    return res;
};


const res1 = groupThePeople([3, 3, 3, 3, 3, 1, 3]);
console.log(res1);

const res2 = groupThePeople([2, 1, 3, 3, 3, 2]);
console.log(res2);

