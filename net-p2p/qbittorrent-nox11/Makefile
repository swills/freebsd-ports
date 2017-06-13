# Created by: Doug Barton <dougb@FreeBSD.org>
# $FreeBSD: head/net-p2p/qbittorrent-nox11/Makefile 413746 2016-04-21 16:43:14Z swills $

PKGNAMESUFFIX=	-nox11

COMMENT=	Bittorrent client using libtorrent-rasterbar, web UI version

BROKEN_powerpc64=	Does not build

MASTERDIR=	${.CURDIR}/../qbittorrent

DESCR=		${.CURDIR}/../qbittorrent/pkg-descr
PLIST_FILES+=	bin/qbittorrent-nox \
		man/man1/qbittorrent-nox.1.gz
PLIST=		${NONEXISTENT}

SLAVE_PORT=	yes

OPTIONS_EXCLUDE=	DOCS

.include "${MASTERDIR}/Makefile"
