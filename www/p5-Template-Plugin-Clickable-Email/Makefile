# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: head/www/p5-Template-Plugin-Clickable-Email/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Template-Plugin-Clickable-Email
PORTVERSION=	0.01
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	TT plugin to make email addresses into HTML links

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Email-Find>=0:mail/p5-Email-Find \
		p5-Template-Toolkit>=0:www/p5-Template-Toolkit

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
