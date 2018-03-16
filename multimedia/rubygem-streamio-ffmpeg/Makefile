# $FreeBSD: head/multimedia/rubygem-streamio-ffmpeg/Makefile 464333 2018-03-13 00:57:09Z jrm $

PORTNAME=	streamio-ffmpeg
PORTVERSION=	3.0.2
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
