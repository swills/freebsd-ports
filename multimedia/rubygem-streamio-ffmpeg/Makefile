# $FreeBSD: head/multimedia/rubygem-streamio-ffmpeg/Makefile 484273 2018-11-06 01:50:26Z jbeich $

PORTNAME=	streamio-ffmpeg
PORTVERSION=	3.0.2
PORTREVISION=	2
CATEGORIES=	multimedia rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Wraps ffmpeg to read metadata and transcodes videos

LICENSE=	MIT
LICENSE_FILES=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-multi_json>=1.8:devel/rubygem-multi_json \
		ffmpeg>=3.4.2,1:multimedia/ffmpeg

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
