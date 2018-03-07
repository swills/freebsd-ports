# Created by: Tony Narlock <tony@git-pull.com>
# $FreeBSD: head/devel/py-libtmux/Makefile 463655 2018-03-05 17:14:35Z sunpoet $

PORTNAME=	libtmux
PORTVERSION=	0.7.8
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Library for interfacing with tmux

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	tmux:sysutils/tmux

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist concurrent distutils

.include <bsd.port.mk>
