# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: head/security/p5-Authen-Simple-HTTP/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Authen-Simple-HTTP
PORTVERSION=	0.2
PORTREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple HTTP authentication

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Authen-Simple>=0:security/p5-Authen-Simple \
		p5-libwww>=0:www/p5-libwww

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
