# Created by: Garrett A. Wollman
# $FreeBSD: head/www/p5-HTML-Element-Extended/Makefile 475985 2018-07-31 09:07:54Z amdmi3 $

PORTNAME=	HTML-Element-Extended
PORTVERSION=	1.18
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Extended interface to HTML::Tree's HTML::Element class

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-HTML-Tree>=3.01:www/p5-HTML-Tree
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
