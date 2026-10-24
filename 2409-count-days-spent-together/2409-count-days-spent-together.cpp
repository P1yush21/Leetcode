class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int numArriveAliceMonth = stoi(arriveAlice.substr(0,2));
        int numArriveAliceDay = stoi(arriveAlice.substr(3,2));

        int numLeaveAliceMonth= stoi(leaveAlice.substr(0,2));
        int numLeaveAliceDay = stoi(leaveAlice.substr(3,2));

        int numArriveBobMonth = stoi(arriveBob.substr(0,2));
        int numArriveBobDay = stoi(arriveBob.substr(3,2));

        int numLeaveBobMonth= stoi(leaveBob.substr(0,2));
        int numLeaveBobDay = stoi(leaveBob.substr(3,2));

        // if((numArriveAliceMonth < numLeaveBobMonth) || (numLeaveAliceMonth < numArriveBobMonth)) return 0;
        
        int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int startAlice = numArriveAliceDay;
        int endAlice = numLeaveAliceDay;
        int startBob = numArriveBobDay;
        int endBob = numLeaveBobDay;
        for (int i = 0; i < numArriveAliceMonth - 1; i++) startAlice += arr[i];
        for (int i = 0; i < numLeaveAliceMonth - 1; i++) endAlice += arr[i];           
        for (int i = 0; i < numArriveBobMonth - 1; i++) startBob += arr[i];
        for (int i = 0; i < numLeaveBobMonth - 1; i++) endBob += arr[i];
        int start = max(startAlice, startBob);
        int end = min(endAlice, endBob);

        return max(0, end - start + 1);
    }
};