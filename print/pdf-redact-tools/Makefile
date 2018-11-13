# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/print/pdf-redact-tools/Makefile 484640 2018-11-10 19:57:07Z kwm $

PORTNAME=	pdf-redact-tools
PORTVERSION=	0.1.2
PORTREVISION=	1
DISTVERSIONPREFIX=	v
CATEGORIES=	print

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Securely redact and strip metadata from PDF files

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	exiftool:graphics/p5-Image-ExifTool \
		convert:graphics/ImageMagick6

USES=		python:2.7
USE_GITHUB=	yes
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

GH_ACCOUNT=	firstlookmedia

.include <bsd.port.mk>
