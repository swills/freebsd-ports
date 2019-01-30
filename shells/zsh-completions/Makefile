# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/shells/zsh-completions/Makefile 491382 2019-01-27 19:56:10Z sunpoet $

PORTNAME=	zsh-completions
PORTVERSION=	0.30.0
CATEGORIES=	shells

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Additional completion definitions for Zsh

LICENSE=	ZSH
LICENSE_NAME=	ZSH license
LICENSE_FILE=	${WRKSRC}/LICENSE
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

NO_ARCH=	yes
NO_BUILD=	yes

GH_ACCOUNT=	zsh-users
USE_GITHUB=	yes

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/share/zsh/site-functions/
	${INSTALL_DATA} ${WRKSRC}/src/* ${STAGEDIR}${PREFIX}/share/zsh/site-functions/

.include <bsd.port.mk>
