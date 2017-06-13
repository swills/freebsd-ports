# Created by: Simon Barner <barner@gmx.de>
# $FreeBSD: head/audio/p5-Ogg-Vorbis-Header/Makefile 418079 2016-07-05 09:09:05Z mat $

PORTNAME=	Ogg-Vorbis-Header
PORTVERSION=	0.05
CATEGORIES=	audio perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Manipulate / fetch info from Ogg-Vorbis audio files

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Inline>=0:devel/p5-Inline \
		p5-Inline-C>=0:devel/p5-Inline-C
LIB_DEPENDS=	libogg.so:audio/libogg \
		libvorbis.so:audio/libvorbis
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAKE_JOBS_UNSAFE=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
