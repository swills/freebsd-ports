# Created by: Ashish SHUKLA <ashish@FreeBSD.org>
# $FreeBSD: head/graphics/py-mcomix/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	mcomix
PORTVERSION=	1.2.1
CATEGORIES=	graphics
MASTER_SITES=	SF/${PORTNAME}/MComix-${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ashish@FreeBSD.org
COMMENT=	GTK2 comic book viewer

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pillow>0:graphics/py-pillow@${FLAVOR}
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		python tar:bzip2
USE_GNOME=	pygtk2
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
