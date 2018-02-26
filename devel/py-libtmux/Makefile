# Created by: Tony Narlock <tony@git-pull.com>
# $FreeBSD: head/devel/py-libtmux/Makefile 463030 2018-02-26 17:00:21Z yuri $

PORTNAME=	libtmux
PORTVERSION=	0.6.3
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Library for interfacing with tmux

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	tmux:sysutils/tmux

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
