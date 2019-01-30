# Created by: Tony Narlock <tony@git-pull.com>
# $FreeBSD: head/devel/py-libtmux/Makefile 491388 2019-01-27 19:57:42Z sunpoet $

PORTNAME=	libtmux
PORTVERSION=	0.8.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Library for interfacing with tmux

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	tmux:sysutils/tmux

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist concurrent distutils

.include <bsd.port.mk>
