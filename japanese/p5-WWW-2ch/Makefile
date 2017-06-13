# Created by: TAKAHASHI Kaoru <kaoru@kaisei.org>
# $FreeBSD: head/japanese/p5-WWW-2ch/Makefile 412347 2016-04-01 14:08:37Z mat $

PORTNAME=	WWW-2ch
PORTVERSION=	0.07
PORTREVISION=	2
CATEGORIES=	japanese www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for scraping of 2ch.net BBS

RUN_DEPENDS=	p5-libwww>=0:www/p5-libwww \
		p5-Class-Accessor>=0:devel/p5-Class-Accessor
TEST_DEPENDS=	p5-UNIVERSAL-require>=0:devel/p5-UNIVERSAL-require

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
