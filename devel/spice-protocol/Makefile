# Created by: Jason Helfman <jgh@FreeBSD.org>
# $FreeBSD: head/devel/spice-protocol/Makefile 490302 2019-01-14 16:41:59Z novel $

PORTNAME=	spice-protocol
PORTVERSION=	0.12.15
CATEGORIES=	devel
MASTER_SITES=	http://www.spice-space.org/download/releases/

MAINTAINER=	novel@FreeBSD.org
COMMENT=	Simple Protocol for Independent Computing Environments

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six@${PY_FLAVOR}

GNU_CONFIGURE=	yes
USES=		gmake pathfix pkgconfig python tar:bzip2

.include <bsd.port.mk>
