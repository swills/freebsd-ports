# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/mail/p5-Net-ManageSieve/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Net-ManageSieve
PORTVERSION=	0.13
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	ManageSieve Protocol Client

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Authen-SASL>=0:security/p5-Authen-SASL
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
