# Created by: Franz Bettag <franz@bett.ag>
# $FreeBSD: head/security/stud/Makefile 436247 2017-03-15 14:45:30Z mat $

PORTNAME=	stud
PORTVERSION=	0.4
PORTREVISION=	1
CATEGORIES=	security

MAINTAINER=	franz@bett.ag
COMMENT=	Scalable TLS Unwrapping Daemon

LICENSE=	BSD2CLAUSE

LIB_DEPENDS=	libev.so:devel/libev

USES=		gmake ssl
USE_GITHUB=	yes

GH_ACCOUNT=	wasted

MAKE_ARGS=		MANDIR="${MANDIRS}"
MAKE_JOBS_UNSAFE=	yes

PLIST_FILES=	bin/stud \
		man/man8/stud.8.gz

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
