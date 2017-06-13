# Created by: Tony Narlock <tony@git-pull.com>
# $FreeBSD: head/sysutils/py-tmuxp/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	tmuxp
PORTVERSION=	0.9.3
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	tony@git-pull.com
COMMENT=	Session manager for tmux

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}argcomplete>=0:devel/py-argcomplete \
		${PYTHON_PKGNAMEPREFIX}kaptan>=0.5.7:devel/py-kaptan \
		${PYTHON_PKGNAMEPREFIX}colorama>=0.3.3:devel/py-colorama \
		tmux:sysutils/tmux

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
