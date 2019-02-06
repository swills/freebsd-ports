# $FreeBSD: head/misc/lastools/Makefile 492279 2019-02-06 00:10:49Z linimon $

PORTNAME=	LAStools
DISTVERSION=	g20181019
CATEGORIES=	misc

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Efficient tools for LiDAR processing

LICENSE=	LGPL21

USES=		compiler:c++11-lang gmake
USE_GITHUB=	yes
GH_TAGNAME=	8ff2694

BINARY_ALIAS=	make=gmake g++=${CXX}

PLIST_FILES=	${EXECUTABLES:S/^/bin\//}

EXECUTABLES=	lasindex las2txt las2las txt2las lasdiff lasinfo laszip lasmerge lasprecision

do-install:
.for e in ${EXECUTABLES}
	${INSTALL_PROGRAM} ${WRKSRC}/bin/${e} ${STAGEDIR}${PREFIX}/bin
.endfor

.include <bsd.port.mk>
