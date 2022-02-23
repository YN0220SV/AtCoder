from collections import Counter

N = int(input())
C = Counter()  # Counterはとても便利です
# とりあえず、Counter()に、ぶちこんでいく
for _ in range(N):
    s = input()
    C[s] += 1
# ぶち込み完了

mc = C.most_common()[0]  # 例えば、("takahashi", 3)が得られる
m_name, m_count = mc
print(m_name)
