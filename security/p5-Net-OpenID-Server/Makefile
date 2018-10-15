# Created by: Alex Kapranoff <kappa@rambler-co.ru>
# $FreeBSD: head/security/p5-Net-OpenID-Server/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Net-OpenID-Server
PORTVERSION=	1.09
PORTREVISION=	2
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Reference implementation of OpenID server

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Net-OpenID-Common>=1.11:security/p5-Net-OpenID-Common \
		p5-URI>=0:net/p5-URI

INSTALL_TARGET=	pure_install
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
