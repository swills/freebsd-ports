# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: head/www/p5-HTML-Lint/Makefile 478184 2018-08-27 09:08:11Z amdmi3 $

PORTNAME=	HTML-Lint
PORTVERSION=	2.20
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:PETDANCE
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	HTML::Lint - check for HTML errors in a string or file

LICENSE=	ART20

BUILD_DEPENDS=	p5-HTML-Tagset>0:www/p5-HTML-Tagset \
		p5-libwww>0:www/p5-libwww \
		p5-HTML-Parser>0:www/p5-HTML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
