# Created by: Daniel Morante <daniel@morante.net>
# $FreeBSD: head/net-p2p/zetacoin-nox11/Makefile 439779 2017-04-30 01:12:10Z linimon $

MASTERDIR=	${.CURDIR}/../zetacoin
PKGNAMESUFFIX=	-nox11

OPTIONS_EXCLUDE=	X11 QRCODES

SLAVE_PORT=	yes

BROKEN_armv6=	AtomicPointer not implemented
BROKEN_powerpc64=	Does not configure: error: No working boost sleep implementation found

.include "${MASTERDIR}/Makefile"
