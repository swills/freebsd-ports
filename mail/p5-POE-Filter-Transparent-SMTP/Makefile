# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/mail/p5-POE-Filter-Transparent-SMTP/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	POE-Filter-Transparent-SMTP
PORTVERSION=	0.2
PORTREVISION=	1
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:C/0+$//}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	SMTP transparency POE filter

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-POE>=0:devel/p5-POE

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
