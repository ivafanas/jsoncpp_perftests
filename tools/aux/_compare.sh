
BINS_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

FILTER=$1

python ../tools/compare.py \
	--path_to_bins="${BINS_DIR}" \
	--sltbench_bin=sltbench_perftests \
	--googlebench_bin=googlebench_perftests \
	--nonius_bin=nonius_perftests \
	--runcount=4 \
	--filter="${FILTER}" \
	--pincpu=1
