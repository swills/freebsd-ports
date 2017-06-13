# Created by: Cheng-Lung Sung <clsung@dragon2.net>
# $FreeBSD: head/security/p5-Crypt-xDBM_File/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	Crypt-xDBM_File
PORTVERSION=	1.02
PORTREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module encrypt almost any kind of dbm file

BUILD_DEPENDS=	p5-Crypt-Blowfish>=0:security/p5-Crypt-Blowfish
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
