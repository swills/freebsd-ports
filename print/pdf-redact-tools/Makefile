# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/print/pdf-redact-tools/Makefile 480091 2018-09-19 08:29:23Z ehaupt $

PORTNAME=	pdf-redact-tools
PORTVERSION=	0.1.2
DISTVERSIONPREFIX=	v
CATEGORIES=	print

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Securely redact and strip metadata from PDF files

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	exiftool:graphics/p5-Image-ExifTool \
		convert:graphics/ImageMagick

USES=		python:2.7
USE_GITHUB=	yes
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

GH_ACCOUNT=	firstlookmedia

.include <bsd.port.mk>
