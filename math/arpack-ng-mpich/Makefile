# Created by: Thierry Thomas <thierry@pompo.net>
# $FreeBSD: head/math/arpack-ng-mpich/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	arpack-ng
PORTREVISION=	1
PKGNAMESUFFIX=	-mpich

COMMENT=	Revised Argand library for solving large-scale eigenvalue problems with MPI support

LIB_DEPENDS+=	libmpich.so.8:net/mpich2

MASTERDIR=	${.CURDIR}/../../math/arpack-ng

MPICH_ARG=	--enable-mpi
CONFLICTS_INSTALL=	arpack-ng-3.*

PLIST_FILES+=	lib/libparpack.a \
		lib/libparpack.so \
		lib/libparpack.so.2 \
		lib/libparpack.so.2.0.0

.include "${MASTERDIR}/Makefile"
