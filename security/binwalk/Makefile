# $FreeBSD: head/security/binwalk/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	binwalk
PORTVERSION=	2.1.1
DISTVERSIONPREFIX=	v
CATEGORIES=	security python

MAINTAINER=	pi@FreeBSD.org
COMMENT=	Search binary images for embedded files and executable code

LICENSE=	MIT

USES=		python
USE_GITHUB=	yes
GH_ACCOUNT=	devttys0
USE_PYTHON=	autoplist distutils optsuffix concurrent

RUN_DEPENDS=	7z:archivers/p7zip \
		cabextract:archivers/cabextract

.include <bsd.port.mk>
