# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: head/mail/p5-Sendmail-AccessDB/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Sendmail-AccessDB
PORTVERSION=	1.04
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Perl5 interface to the Sendmail access.db list

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-BerkeleyDB>=0:databases/p5-BerkeleyDB

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
