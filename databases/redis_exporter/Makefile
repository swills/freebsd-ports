# Created by: Jev Björsell <ports@ecadlabs.com>
# $FreeBSD: head/databases/redis_exporter/Makefile 482302 2018-10-17 19:17:08Z joneum $

PORTNAME=	redis_exporter
PORTVERSION=	0.21.2
DISTVERSIONPREFIX=v
CATEGORIES=	databases

MAINTAINER=	arcade@b1t.name
COMMENT=	Prometheus exporter for redis stats

LICENSE=	MIT

USES=		go

USE_GITHUB=	yes
GH_ACCOUNT=	oliver006

GO_PKGNAME=	github.com/${GH_ACCOUNT}/${PORTNAME}
GO_TARGET=	github.com/${GH_ACCOUNT}/${PORTNAME}

PLIST_FILES=	bin/redis_exporter

USE_RC_SUBR=	redis_exporter

do-install:
	${INSTALL_PROGRAM} ${WRKDIR}/bin/redis_exporter ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
