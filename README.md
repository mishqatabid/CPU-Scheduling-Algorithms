# CPU Scheduling

CPU scheduling is a fundamental aspect of operating system design that determines which processes in the ready queue are allocated to the CPU. Efficient CPU scheduling enhances system performance by maximizing CPU utilization, ensuring fair process distribution, and minimizing response time.

## Types of CPU Scheduling Algorithms

### 1. First-Come, First-Served (FCFS)

- **Description**: FCFS is the simplest scheduling algorithm. The process that arrives first gets executed first.
- **Characteristics**:
  - Non-preemptive
  - Easy to implement
  - Can lead to the "convoy effect," where shorter processes get stuck waiting behind longer processes
- **Example**:
  - Process Arrival: P1, P2, P3
  - Execution Order: P1 -> P2 -> P3

### 2. Shortest Job First (SJF)

- **Description**: SJF schedules processes based on the length of their next CPU burst. The process with the shortest burst time gets executed first.
- **Characteristics**:
  - Can be preemptive or non-preemptive
  - Minimizes average waiting time
  - Difficult to implement because it requires knowledge of future burst times
- **Example**:
  - Process Burst Time: P1 (6ms), P2 (2ms), P3 (4ms)
  - Execution Order: P2 -> P3 -> P1

### 3. Round Robin (RR)

- **Description**: RR assigns a fixed time unit (time quantum) to each process in the ready queue and cycles through them.
- **Characteristics**:
  - Preemptive
  - Ensures fair sharing of CPU time
  - Performance depends on the length of the time quantum
- **Example**:
  - Time Quantum: 4ms
  - Process Burst Time: P1 (8ms), P2 (6ms), P3 (4ms)
  - Execution Order: P1 (4ms) -> P2 (4ms) -> P3 (4ms) -> P1 (4ms) -> P2 (2ms)

### 4. Priority Scheduling

- **Description**: Processes are scheduled based on priority. Higher priority processes are executed before lower priority ones.
- **Characteristics**:
  - Can be preemptive or non-preemptive
  - May lead to "starvation" of lower priority processes
  - Can be mitigated using "aging," which gradually increases the priority of waiting processes
- **Example**:
  - Process Priority: P1 (2), P2 (1), P3 (3) [Higher number indicates higher priority]
  - Execution Order: P3 -> P1 -> P2

---
