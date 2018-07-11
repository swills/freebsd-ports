# $FreeBSD: head/devel/p5-Config-MySQL/Makefile 474242 2018-07-09 08:40:17Z mat $

PORTNAME=	Config-MySQL
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to read/write MySQL-style configuration files

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	\
	p5-Config-INI>0:devel/p5-Config-INI

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
