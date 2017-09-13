# Created by: Nicolas Embriz <nbari@dalmp.com>
# $FreeBSD: head/devel/gitflow/Makefile 449512 2017-09-09 21:29:50Z dbaio $

PORTNAME=	gitflow
PORTVERSION=	1.8.0
CATEGORIES=	devel

MAINTAINER=	nbari@tequila.io
COMMENT=	Git extensions to provide high-level repository operations

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${LOCALBASE}/bin/getopt:misc/getopt

USE_GITHUB=	yes
GH_ACCOUNT=	nbari

OPTIONS_DEFINE=	EXAMPLES

USES=		gmake

NO_BUILD=	yes
NO_ARCH=	yes
MAKE_ARGS=	prefix=${STAGEDIR}${PREFIX}

post-install:
	${MV} ${STAGEDIR}${DOCSDIR} ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
