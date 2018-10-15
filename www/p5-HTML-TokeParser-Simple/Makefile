# Created by: Lars Eggert <lars.eggert@gmx.net>
# $FreeBSD: head/www/p5-HTML-TokeParser-Simple/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	HTML-TokeParser-Simple
PORTVERSION=	3.16
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Subclass of HTML::TokeParser with easy-to-remember method calls

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTML-Parser>=0:www/p5-HTML-Parser \
		p5-Sub-Override>=0:devel/p5-Sub-Override

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
