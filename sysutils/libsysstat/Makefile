# Created by: Olivier Duchateau
# $FreeBSD: head/sysutils/libsysstat/Makefile 483680 2018-11-01 15:29:53Z linimon $

PORTNAME=	libsysstat
PORTVERSION=	0.4.1
CATEGORIES=	sysutils
MASTER_SITES=	LXQT/${PORTNAME}

MAINTAINER=	jsm@FreeBSD.org
COMMENT=	Library used to query system info and statistics

LICENSE=	LGPL21

USES=	cmake:outsource compiler:c++11-lang lxqt pkgconfig tar:xz qt:5
USE_QT=	qmake_build buildtools_build core
USE_LXQT=	buildtools

post-extract:
	@${CP} ${FILESDIR}/config.h.in ${WRKSRC};

.include <bsd.port.mk>
