# Created by: Tony Narlock <tony@git-pull.com>
# $FreeBSD: head/sysutils/py-tmuxp/Makefile 493387 2019-02-19 19:47:38Z sunpoet $

PORTNAME=	tmuxp
DISTVERSION=	1.5.1
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Session manager for tmux

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}click>=6.7:devel/py-click@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}colorama>=0.3.9:devel/py-colorama@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}kaptan>=0.5.7:devel/py-kaptan@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}libtmux>=0.7.7:devel/py-libtmux@${PY_FLAVOR} \
		tmux:sysutils/tmux

USES=		python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.mk>
