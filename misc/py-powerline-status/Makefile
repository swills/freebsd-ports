# $FreeBSD: head/misc/py-powerline-status/Makefile 480324 2018-09-21 22:41:09Z swills $

PORTNAME=	powerline-status
PORTVERSION=	2.7
CATEGORIES=	misc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Statusline plugin for vim, zsh, bash, and more

USES=		python shebangfix
USE_PYTHON=	distutils autoplist
SHEBANG_FILES=	powerline/bindings/i3/powerline-i3.py \
		powerline/bindings/bar/powerline-bar.py \
		powerline/bindings/lemonbar/powerline-lemonbar.py \
		powerline/bindings/awesome/powerline-awesome.py

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/powerline

.include <bsd.port.mk>
