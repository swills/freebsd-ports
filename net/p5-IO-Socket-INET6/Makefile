# Created by: Janos.Mohacsi@bsd.hu
# $FreeBSD: head/net/p5-IO-Socket-INET6/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	IO-Socket-INET6
PORTVERSION=	2.72
PORTREVISION=	1
CATEGORIES=	net perl5 ipv6
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:SHLOMIF
PKGNAMEPREFIX=	p5-

MAINTAINER=	jmohacsi@bsd.hu
COMMENT=	Perl module with object interface to AF_INET6 domain sockets

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Socket6>=0.12:net/p5-Socket6
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
