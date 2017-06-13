# Created by: Gerrit Beine <gerrit.beine@gmx.de>
# $FreeBSD: head/www/trac-tocmacro/Makefile 441000 2017-05-16 13:37:51Z joneum $

PORTNAME=	tocmacro
PORTVERSION=	11.0.0.3
PORTREVISION=	3
CATEGORIES=	www devel python
MASTER_SITES=	http://people.freebsd.org/~mm/trac/
PKGNAMEPREFIX=	trac-

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Table of contents macro

RUN_DEPENDS=	tracd:www/trac

WRKSRC=		${WRKDIR}/${PORTNAME}
USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
