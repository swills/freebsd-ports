# Created by: Sergey Matveychuk <sem@ciam.ru>
# $FreeBSD: head/devel/ace+tao-doc/Makefile 481650 2018-10-09 18:42:37Z swills $

PORTNAME=	ace+tao
PORTVERSION=	6.5.2
CATEGORIES=	devel
MASTER_SITES=	ftp://download.dre.vanderbilt.edu/previous_versions/ \
		http://download.dre.vanderbilt.edu/previous_versions/
PKGNAMESUFFIX=	-doc
DISTNAME=	ACE-html-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	ACE+TAO HTML documentation

WRKSRC=		${WRKDIR}/html

NO_BUILD=	yes
NO_ARCH=	yes
PLIST=		${WRKDIR}/pkg-plist

do-install:
	cd ${WRKSRC} && ${FIND} -s . -type f | ${SED} -e 's|^\./|${DOCSDIR}/|' >> ${PLIST}
	cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
