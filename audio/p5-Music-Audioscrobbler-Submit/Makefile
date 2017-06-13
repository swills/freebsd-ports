# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: head/audio/p5-Music-Audioscrobbler-Submit/Makefile 412344 2016-04-01 13:29:15Z mat $

PORTNAME=	Music-Audioscrobbler-Submit
PORTVERSION=	0.05
PORTREVISION=	2
CATEGORIES=	audio perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Module to submit songs to last.fm from MPD

BUILD_DEPENDS=	p5-libwww>=0:www/p5-libwww \
		p5-Config-Options>=0.8:devel/p5-Config-Options
RUN_DEPENDS:=	p5-libwww>=0:www/p5-libwww \
		p5-Config-Options>=0.8:devel/p5-Config-Options

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
