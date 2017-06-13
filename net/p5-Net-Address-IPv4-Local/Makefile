# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: head/net/p5-Net-Address-IPv4-Local/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	Net-Address-IPv4-Local
PORTVERSION=	0.12
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Class for discovering the local system's IP address

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Error>=0:lang/p5-Error
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
