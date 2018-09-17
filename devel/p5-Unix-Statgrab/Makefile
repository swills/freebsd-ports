# Created by: Tim Bishop <tim@bishnet.net>
# $FreeBSD: head/devel/p5-Unix-Statgrab/Makefile 479593 2018-09-12 10:21:41Z tdb $

PORTNAME=	Unix-Statgrab
PORTVERSION=	0.112
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tdb@FreeBSD.org
COMMENT=	Perl extension for collecting information about the machine

BUILD_DEPENDS=	p5-Config-AutoConf>=0.317:devel/p5-Config-AutoConf
LIB_DEPENDS=	libstatgrab.so:devel/libstatgrab

USES=		perl5 pkgconfig
USE_PERL5=	configure

.include <bsd.port.mk>
