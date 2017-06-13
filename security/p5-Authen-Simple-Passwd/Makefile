# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: head/security/p5-Authen-Simple-Passwd/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	Authen-Simple-Passwd
PORTVERSION=	0.6
PORTREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple Passwd authentication

BUILD_DEPENDS=	p5-Authen-Simple>=0:security/p5-Authen-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
