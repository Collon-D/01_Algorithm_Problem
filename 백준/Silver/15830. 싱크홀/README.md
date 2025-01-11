# [Silver IV] 싱크홀 - 15830 

[문제 링크](https://www.acmicpc.net/problem/15830) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

임의 정밀도 / 큰 수 연산, 구현, 물리학

### 제출 일자

2025년 1월 11일 15:23:37

### 문제 설명

<p>남제관의 중앙에 싱크홀이 발생했다. 진원이와 광빈이는 구멍의 깊이가 궁금해 중앙에 모였다. 진원이는 돌을 떨어뜨려 바닥에 닿기까지의 시간을 측정해 구멍의 깊이를 계산하고자 했다.</p>

<p style="text-align: center;"><img alt="" src="https://onlinejudgeimages.s3-ap-northeast-1.amazonaws.com/problem/15829/1.png" style="width: 284px; height: 228px;"></p>

<p style="text-align: center;">그림1. 진지한 실험을 하고있는 진원이와 광빈이의 모습이다.</p>

<p>돌을 떨어뜨리는 순간!!!!! 광빈이가 우다다를 시전하며 진원이를 밀쳐버렸다! 다행히 진원이가 구멍에 빠지지는 않았지만, 돌이 수직하게 떨어지지 않게 되어버려 수직운동 공식 만으로는 깊이를 구할 수 없게 되어버렸다.</p>

<p>구멍에 빠질 뻔해 화가 난 진원이는 광빈이에게 깊이를 계산해 내라고 하고, 기숙사로 들어가버렸다.</p>

<p>남제관은 미스터리한 곳으로 조금 다른 물리법칙이 적용된다.</p>

<ol>
	<li>공기의 저항은 없다.</li>
	<li>중력가속도 g는 10 m/s^2다.</li>
	<li>따라서 자유낙하 운동으로 이동한 거리 s는 다음과 같이 이동한 시간 t에 관한 식으로 나타낼 수 있다.</li>
</ol>

<p><mjx-container class="MathJax" jax="CHTML" display="true" style="font-size: 109%; position: relative;"> <mjx-math display="true" class="MJX-TEX" aria-hidden="true" style="margin-left: 0px; margin-right: 0px;"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D460 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3D"></mjx-c></mjx-mo><mjx-mfrac space="4"><mjx-frac type="d"><mjx-num><mjx-nstrut type="d"></mjx-nstrut><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-num><mjx-dbox><mjx-dtable><mjx-line type="d"></mjx-line><mjx-row><mjx-den><mjx-dstrut type="d"></mjx-dstrut><mjx-mn class="mjx-n"><mjx-c class="mjx-c32"></mjx-c></mjx-mn></mjx-den></mjx-row></mjx-dtable></mjx-dbox></mjx-frac></mjx-mfrac><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D454 TEX-I"></mjx-c></mjx-mi><mjx-msup><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D461 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: 0.413em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c32"></mjx-c></mjx-mn></mjx-script></mjx-msup><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3D"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c35"></mjx-c></mjx-mn><mjx-msup><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D461 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: 0.413em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c32"></mjx-c></mjx-mn></mjx-script></mjx-msup></mjx-math><mjx-assistive-mml unselectable="on" display="block"><math xmlns="http://www.w3.org/1998/Math/MathML" display="block"><mi>s</mi><mo>=</mo><mfrac><mn>1</mn><mn>2</mn></mfrac><mi>g</mi><msup><mi>t</mi><mn>2</mn></msup><mo>=</mo><mn>5</mn><msup><mi>t</mi><mn>2</mn></msup></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">\[s = \frac{1}{2}gt^2 = 5t^2\]</span> </mjx-container></p>

<p style="text-align: center;">그림 2. 자유낙하에 의한 이동거리 공식</p>

<p>광빈이가 관찰해본 결과, 구멍의 벽은 아래와 같은 특징을 가지고 있었다.</p>

<ol>
	<li>벽에 돌이 부딪히면 y축 으로의 속도을 잃어 0이 된다. 즉, 낙하속도가 초기화된다.</li>
	<li>충돌시에 수평속력은 80%만이 유지되며 운동 방향은 반대가 된다. (과학적 인지는 모르겠당)</li>
</ol>

<p style="text-align: center;"><img alt="" src="https://onlinejudgeimages.s3-ap-northeast-1.amazonaws.com/problem/15829/2.png" style="width: 275px; height: 277px;"></p>

<p style="text-align: center;">그림3. 돌이 벽에 충돌하는 순간의 예시. 돌의 충돌전 수평 속도가 100이었다면 충돌 후에는 80으로 감소한다. 수평운동의 방향은 정반대가 된다.</p>

<p>광빈이는 돌이 충돌한 횟수를 측정하여 이 정보를 바탕으로 대략적인 구멍의 깊이를 추측하려고 한다. 이때, 돌의 크기는 충분히 작으므로 점으로 가정하자. 하지만 광빈이는 수학도 코딩도 못하기 때문에 당신에게 부탁을 하러왔다. 처음 진원이가 돌을 놓쳤을 때의 정보와 구멍의 실제 깊이가 입력으로 주어질 때 돌이 벽에 충돌하는 횟수를 계산하는 프로그램을 작성해주자.</p>

### 입력 

 <p>돌의 초기 수평 속력 V, 구멍의 너비 W, 구멍의 실제 깊이 D가 주어진다. V, W, D 의 단위는 각각 m/s, m, m 이다.</p>

### 출력 

 <p>돌이 구멍의 벽면에 부딪히는 횟수를 출력하시오.</p>

