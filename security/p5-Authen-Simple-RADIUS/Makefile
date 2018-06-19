# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: head/security/p5-Authen-Simple-RADIUS/Makefile 471681 2018-06-04 18:14:32Z sunpoet $

PORTNAME=	Authen-Simple-RADIUS
PORTVERSION=	0.1
PORTREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple RADIUS authentication

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Authen-Simple>=0:security/p5-Authen-Simple \
		p5-Authen-Radius>=0:security/p5-Authen-Radius
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
