# $FreeBSD: head/devel/git-extras/Makefile 446796 2017-07-28 02:02:11Z dbaio $

PORTNAME=	git-extras
PORTVERSION=	4.4.0
CATEGORIES=	devel

MAINTAINER=	igor.ostapenko@gmail.com
COMMENT=	Sub-commands for repo summary, repl, changelog population, and more

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	git:devel/git \
		bash:shells/bash

USES=		gmake

USE_GITHUB=	yes
GH_ACCOUNT=	tj

NO_BUILD=	yes
NO_ARCH=	yes

.include <bsd.port.mk>
