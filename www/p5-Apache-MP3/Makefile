# Created by: Dominic Mitchell <dom@happygiraffe.net>
# $FreeBSD: head/www/p5-Apache-MP3/Makefile 428129 2016-12-08 15:38:24Z tijl $

PORTNAME=	Apache-MP3
PORTVERSION=	4.00
PORTREVISION=	3
CATEGORIES=	www audio perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	MP3 browsing and streaming under mod_perl and Apache

BUILD_DEPENDS=	p5-Audio-Wav>=0:audio/p5-Audio-Wav \
		p5-CGI-Session>=0:www/p5-CGI-Session \
		p5-MP3-Info>=0:audio/p5-MP3-Info \
		p5-Ogg-Vorbis-Header>=0:audio/p5-Ogg-Vorbis-Header \
		${APACHE_PKGNAMEPREFIX}mod_perl2>=0:www/mod_perl2
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
USE_APACHE=	22+

post-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/apache_mp3/* ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
