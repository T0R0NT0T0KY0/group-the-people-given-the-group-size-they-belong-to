function groupThePeople(groupSizes: number[]): number[][] {
    const res: number[][] = [];
    const groupsMap = new Map<number, number[]>();

    groupSizes.forEach((groupSize, userId) => {
        const group = groupsMap.get(groupSize) || [];
        group.push(userId);

        if (group.length === groupSize) {
            res.push(group);
            groupsMap.delete(groupSize);
        } else {
            groupsMap.set(groupSize, group);
        }
    })

    return res;
};


const res1 = groupThePeople([3, 3, 3, 3, 3, 1, 3]);
console.log(res1);

const res2 = groupThePeople([2, 1, 3, 3, 3, 2]);
console.log(res2);

