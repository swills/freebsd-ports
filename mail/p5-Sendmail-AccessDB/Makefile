# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: head/mail/p5-Sendmail-AccessDB/Makefile 421693 2016-09-10 14:14:08Z ehaupt $

PORTNAME=	Sendmail-AccessDB
PORTVERSION=	1.04
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Perl5 interface to the Sendmail access.db list

BUILD_DEPENDS=	p5-BerkeleyDB>=0:databases/p5-BerkeleyDB
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
