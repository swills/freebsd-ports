# Created by: Jim Pirzyk pirzyk@FreeBSD.org
# $FreeBSD: head/sysutils/p5-File-Stat-Bits/Makefile 455927 2017-12-11 07:18:48Z linimon $

PORTNAME=	File-Stat-Bits
PORTVERSION=	1.01
PORTREVISION=	1
CATEGORIES=	sysutils perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	pirzyk@FreeBSD.org
COMMENT=	Perl5 module interface to the major()/minor() C routines

BROKEN_armv6=		fails to build: runaway build
BROKEN_armv7=		fails to build: runaway build

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
