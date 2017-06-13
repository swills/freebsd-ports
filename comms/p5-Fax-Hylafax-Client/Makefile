# Created by: Tony Shadwick <tshadwick@oss-solutions.com>
# $FreeBSD: head/comms/p5-Fax-Hylafax-Client/Makefile 412344 2016-04-01 13:29:15Z mat $

PORTNAME=	Fax-Hylafax-Client
PORTVERSION=	1.02
PORTREVISION=	1
CATEGORIES=	comms perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple Perl client for the HylaFAX fax server

BUILD_DEPENDS=	p5-Net>=0:net/p5-Net
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
